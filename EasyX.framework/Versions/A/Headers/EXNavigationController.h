//
//  EXNavigationController.h
//  EasyX
//
//  Created by feng lu on 12-11-19.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXBaseNavigationViewController.h"

@class EXNavigationViewController;
@interface EXNavigationController : EXBaseNavigationViewController {
@private
    BOOL _exNavigationBarHidden;
}


@property (nonatomic, assign, readonly) BOOL exNavigationBarHidden;

- (id)initWithNavControllerContainer:(EXNavigationViewController *)navC;


/**
 * NavBar and TabBar hidden
 */
- (void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;

@end
