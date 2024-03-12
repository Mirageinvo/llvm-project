add_llvm_component_group(TBSim)

add_llvm_target(TBSimCodeGen
    TBSimTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  TBSimInfo

  ADD_TO_COMPONENT
  TBSim
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)