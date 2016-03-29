#include "HPoisson.h"
#include "OgataThinning.h"
#include "PlainHawkes.h"
#include "Diagnosis.h"
#include "Utility.h"
#include "PlainTerminating.h"
#include "TerminatingProcessLearningTriggeringKernel.h"
#include "Graph.h"
#include "LowRankHawkesProcess.h"
#include "ContinEst.h"
#include "HawkesLearningTriggeringKernel.h"

class TestModule
{

public:

	static void TestHPoisson();

	static void TestPlainHawkes();

	static void TestMultivariateTerminating();

	static void TestMultivariateTerminatingWithUnknownStructure();

	static void TestTerminatingProcessLearningTriggeringKernel();

	static void TestTerminatingProcessLearningTriggeringKernelWithUnknownStructure();

	static void TestSparsePlainHawkes();

	static void TestPlainHawkesNuclear();

	static void TestLowRankHawkes();

	static void TestGraph();

	static void TestPlot();

	static void TestHawkesLearningTriggeringKernel();

	static void TestHawkesLearningTriggeringKernelUnknownStructure();

};