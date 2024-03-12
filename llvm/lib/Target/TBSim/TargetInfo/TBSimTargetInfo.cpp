#include "TargetInfo/TBSimTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheTBSimTarget() {
  static Target TBSimTarget;
  return TBSimTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeTBSimTargetInfo() {
  RegisterTarget<Triple::tbsim> X(getTheTBSimTarget(), "tbsim", "TBSim 64",
                                   "TBSIM");
}