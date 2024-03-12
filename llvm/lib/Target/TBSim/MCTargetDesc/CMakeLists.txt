add_llvm_component_library(LLVMTBSimDesc
  TBSimMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  TBSimInfo

  ADD_TO_COMPONENT
  TBSim
 )