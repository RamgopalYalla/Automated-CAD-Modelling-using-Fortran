// #######################################################################################
// CLFE_RAMGOPAL YALLA; Matriculation. Nr: 03040034
// PROFILE ANALYSIS WITH THE HELP OF THIN WALL APPROXIMATION
// #######################################################################################


#include "base.h"
#include "node.h"
#include "element.h"
#include "profile.h"
#include "CombinedProfile.h"

// -----------------------------------------------------------------
// Input Libraries
// -----------------------------------------------------------------
#include <stdio.h>

// -----------------------------------------------------------------
// Input Parameters
// -----------------------------------------------------------------
// Length of z-Section                   = z_h   = 140   mm
// Breadth of z-Section                  = z_b   = 65    mm
// Thickness of height of z-Section      = s     = 8     mm
// Thickness of breadth of z-Section     = t     = 10    mm
// Outer Diameter of the circle          = m_d_o = 101.6 mm
// Thickness of the circle               = m_d_t = 2.9   mm

// -----------------------------------------------------------------
// Function to read input values
// -----------------------------------------------------------------
int main()
{
    // reset the LOG
    Base::resetLog();
    try
    {
                                                           //    z_h ,z_b,s,t,m_d_o,m_d_t
    //CombinedProfile* pP = new CombinedProfile("CombinedProfile",140.,65.,8.,10.,101.6,2.9);
    //CombinedProfile* pP = new CombinedProfile("CombinedProfile",140.,65.,8.,10.,139.7,3.6);
    CombinedProfile* pP = new CombinedProfile("CombinedProfile",140.,65.,8.,10.,168.3,4);

    // calculate section values
        pP->CalcSectValues();
        pP->List();
        delete pP;
    }
    catch(const char* e)
    {
        printf("*** exception: %s",e);
    }
    return 0;
}

