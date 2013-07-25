//
//  EXNavigationModel.h
//  EasyX
//
//  Created by feng lu on 12-11-5.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#ifndef EasyX_FNavigationModel_h
#define EasyX_FNavigationModel_h

typedef enum {
    EXNavigationModeNone = 0,
    EXNavigationModeCreate,            // a new view controller is created each time
    EXNavigationModeShare,             // a new view controller is created, cached and re-used
    EXNavigationModeModal,             // a new view controller is created and presented modally
    EXNavigationModePopover,           // a new view controller is created and presented in a popover
    EXNavigationModeExternal,          // an external app will be opened
} EXNavigationMode;

#endif
