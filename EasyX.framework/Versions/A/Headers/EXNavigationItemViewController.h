//
//  EXNavigationItemViewController.h
//  EasyX
//
//  Created by feng lu on 12-11-1.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXBaseNavigationViewController.h"
#import "EXBaseViewController.h"
#import "EXNavigationItem.h"
#import "EXContentView.h"

#define kEXTabBarControllerKey   (@"kEXTabBarControllerKey")
#define kFSildeControllerKey    (@"kFSildeControllerKey")
#define kNaviagtionControllerKey    (@"kNaviagtionControllerKey")
#define kPresentNaviagtionControllerKey    (@"kPresentNaviagtionControllerKey")

@class EXNavigationController;
@interface EXNavigationItemViewController : EXBaseViewController {
@private
    EXNavigationItem *_exNavigationItem;
    CGFloat _exNavigationBarHeight;
}


@property (nonatomic, retain) EXNavigationItem *exNavigationItem;
@property (nonatomic, assign) CGFloat exNavigationBarHeight;
@property (nonatomic, assign) EXNavigationController *navigationController;

@end
