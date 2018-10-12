#include <stdio.h>

int main() {
	int CF, i, CFm, CFM;
	double VT, VTm, VTM, CMm, CMM;

	scanf("%d %lf", &CF, &VT);

	CFm = CF;
	CFM = CF;
	VTm = VT;
	VTM = VT;
	for (i = 9; i > 0; i--) {
		scanf("%d %lf", &CF, &VT);

		if (VT > VTM) {
			VTM = VT;
			CFM = CF;
		}
		
		if (VT < VTm) {
			VTm = VT;
			CFm = CF;
		}
	}

	if (VTM < 5000) {
		CMM = VTM * 0.015;

	} else if (VTM >= 5000 && VTM < 15000) {
		CMM = VTM * 0.035;
	
	} else if (VTM >= 15000) {
		CMM = VTM * 0.047;
	
	}else if (VTm < 5000) {
		CMm = VTm * 0.015;

	} else if (VTm >= 5000 && VTm < 15000) {
		CMm=VTm*0.035;

	} else if (VTm >= 15000) {
		CMm=VTm*0.047;
	}
	printf("%d %.2lf %d %.2lf\n", CFM, CMM, CFm, CMm);
	return 0;
}
