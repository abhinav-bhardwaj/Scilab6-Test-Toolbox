extern "C"
{
#include "Scierror.h"
#include "api_scilab.h"
#include <stdio.h>
#include "localization.h"
#include "transpose.h"

static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)
{
    int inr = 0;
    int inc = 0;
    int*in1 = NULL;
    int*out1 = NULL;

if (nin != 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

if (nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }
if (scilab_isInt32(env, in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0 || scilab_isEmpty(env, in[0]) == 1)
    {
        Scierror(999, _("%s: Wrong type for input argument #%d: A int32 matrix expected.\n"), fname, 1);
        return 1;
    }
    scilab_getDim2d(env, in[0], &inr, &inc);
    scilab_getInteger32Array(env, in[0], &in1);

    out[0] = scilab_createInteger32Matrix2d(env, inc, inr);
   	scilab_getInteger32Array(env, out[0], &out1);

    transpose(inr,inc,in1,out1);

    return 0;
}
}