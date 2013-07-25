//
//  FImageBufferDefines.h
//  SunNote
//
//  Created by jf4444 on 13-4-3.
//
//

#define IMAGE_BUFFER_NAV_CONTROLLER_KEY         (@"iamge_buffer_navControloler_key")

#define IMAGE_BUFFER_UNIT_DEFALUT_INTERVAL      (3.0f)

typedef enum {
	EXImageBufferUnitLoadRefreshMode_RoundRobin = 0,
	EXImageBufferUnitLoadRefreshMode_WithoutDelay
} EXImageBufferUnitLoadRefreshMode;

typedef enum {
	EXStatusBarLoaderAnimationType_System = 0,
	EXStatusBarLoaderAnimationType_Circle,
	EXStatusBarLoaderAnimationType_Shrink,
    EXStatusBarLoaderAnimationType_Blow,
    EXStatusBarLoaderAnimationType_Non
} EXStatusBarLoaderAnimationType;