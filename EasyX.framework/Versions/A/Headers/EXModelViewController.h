//
//  EXModelViewController.h
//  EasyX
//
//  Created by feng  on 12-11-1.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXViewController.h"

@interface EXModelViewController : EXViewController
{
    struct {
        unsigned int isViewInvalid:1;
        unsigned int isViewSuspended:1;
        unsigned int isUpdatingView:1;
        unsigned int isShowingEmpty:1;
        unsigned int isShowingLoading:1;
        unsigned int isShowingModel:1;
        unsigned int isShowingError:1;
    } _flags;

}
@end
