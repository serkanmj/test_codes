#ifndef AZP_ALLMETAL_H
#define AZP_ALLMETAL_H

#include <stdint.h>

#define AZP_ALLM_MIDWIN_LEFT_UPX	0
#define AZP_ALLM_MIDWIN_LEFT_UPY	(2*(GLCD_Y_SIZE/6))
#define AZP_ALLM_MIDWIN_SIZEX		GLCD_X_SIZE
#define AZP_ALLM_MIDWIN_SIZEY		(GLCD_Y_SIZE - (2*(GLCD_Y_SIZE/6)))

// left & right bars and filled-scope are located in middlw window // 
#define LEFT_BAR_LEFT_UPX			2
#define LEFT_BAR_LEFT_UPY			2
#define LEFT_BAR_RIGHT_DOWNX		((AZP_ALLM_MIDWIN_SIZEX/6)-2)
#define LEFT_BAR_RIGHT_DOWNY		(AZP_ALLM_MIDWIN_SIZEY-2)
#define LEFT_BAR_SIZEX				(LEFT_BAR_RIGHT_DOWNX - LEFT_BAR_LEFT_UPX)
#define LEFT_BAR_SIZEY				(LEFT_BAR_RIGHT_DOWNY - LEFT_BAR_LEFT_UPY)

#define RIGHT_BAR_LEFT_UPX			((5*(AZP_ALLM_MIDWIN_SIZEX/6))+2)
#define RIGHT_BAR_LEFT_UPY			2
#define RIGHT_BAR_RIGHT_DOWNX		(AZP_ALLM_MIDWIN_SIZEX-2)
#define RIGHT_BAR_RIGHT_DOWNY		(AZP_ALLM_MIDWIN_SIZEY-2)
#define RIGHT_BAR_SIZEX				(RIGHT_BAR_RIGHT_DOWNX - RIGHT_BAR_LEFT_UPX)
#define RIGHT_BAR_SIZEY				(RIGHT_BAR_RIGHT_DOWNY - RIGHT_BAR_LEFT_UPY)

#define AZP_ALLM_FS_LEFT_UPX		(LEFT_BAR_RIGHT_DOWNX+AZP_ALLM_FS_PARTS_WIDTH)
#define AZP_ALLM_FS_LEFT_UPY		2	
#define AZP_ALLM_FS_RIGHT_DOWNX		(RIGHT_BAR_LEFT_UPX - AZP_ALLM_FS_PARTS_WIDTH)
#define AZP_ALLM_FS_RIGHT_DOWNY		(LEFT_BAR_RIGHT_DOWNY-2)
#define AZP_ALLM_FS_SIZEX			(AZP_ALLM_FS_RIGHT_DOWNX - AZP_ALLM_FS_LEFT_UPX)
#define AZP_ALLM_FS_SIZEY			(AZP_ALLM_FS_RIGHT_DOWNY - AZP_ALLM_FS_LEFT_UPY)

#define AZP_ALLM_FS_PARTS_WIDTH			1
#define AZP_ALLM_FS_XRANGE				(GLCD_X_SIZE - (2*(GLCD_X_SIZE/6))-(2*AZP_ALLM_FS_PARTS_WIDTH))
#define AZP_ALLM_FS_PARTS_COUNT			(AZP_ALLM_FS_XRANGE/AZP_ALLM_FS_PARTS_WIDTH)
#if(AZP_ALLM_FS_XRANGE != (AZP_ALLM_FS_PARTS_WIDTH * AZP_ALLM_FS_PARTS_COUNT))
	//#error "FILLED SCOPE PARTS WIDTH is NOT OPTIMAL"
#endif

extern uint8_t AZP_AllMetal(void);

#endif
