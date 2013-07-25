//
//  EXBaseNavigationViewController.h
//  EasyX
//
//  Created by feng lu on 12-11-1.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EXBaseNavigationViewController : UINavigationController


- (void)pushViewController: (UIViewController*)controller
    animatedWithTransition: (UIViewAnimationTransition)transition;
@end
