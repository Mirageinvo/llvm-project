add_llvm_component_library(LLVMTBSimInfo
  TBSimTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  TBSim
)