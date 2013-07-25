//
//  AppDelegate.m
//  EsayXSamples
//
//  Created by feng lu on 13-6-8.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "AppDelegate.h"

//new
//slide
#import "SlideViewController.h"

//table
#import "TableCustomController.h"
#import "TablePushController.h"

//tabbar
#import "TabBarController.h"
#import "Tab1Controller.h"
#import "Tab2Controller.h"
#import "Tab3Controller.h"
#import "Tab4Controller.h"
#import "Tab5Controller.h"
#import "Tab6Controller.h"
#import "Tab7Controller.h"

//textTable
#import "TextLableController.h"

//navigation
#import "NavigateionController.h"
#import "NavBarController.h"


//image down
#import "ImageLoderController.h"
#import "ComplexImageLoderController.h"


//scroll view
#import "ScrollViewController.h"

//statusBar hidden
#import "StatusBarHiddenViewController.h"
#import "StatusBarNextPageController.h"

//present controller
#import "PresentViewController.h"
#import "PresentRootViewController.h"

@implementation AppDelegate

- (void)dealloc
{
    [super dealloc];
}


// navigator为存贮需要初始化的Class的容器,必须将用到的class添加到navigator
- (void)setRootController {
    
    EXNavigator* nav = [EXNavigator navigator];
    EXRegistrationToole* reg = nav.regToole;
    
    [reg setRootController:[SlideViewController class]];

    [nav restoreViewControllers];
    [nav openURLAction:[EXURLAction actionWithURLPath:RootController]];
}


- (void)addTableClass
{
    EXNavigator* nav = [EXNavigator navigator];
    EXRegistrationToole* reg = nav.regToole;
    
    [reg            from: @"TableCustomController"
                  parent:nil
        toViewController: [TableCustomController class]
                selector: nil
              transition: 0];
    
    [reg            from: @"TablePushController"
                  parent:nil
        toViewController: [TablePushController class]
                selector: nil
              transition: 0];
    
    [reg            from: @"ScrollViewController"
                  parent:nil
        toViewController: [ScrollViewController class]
                selector: nil
              transition: 0];
}


- (void)addTabBarClass
{
    EXNavigator* nav = [EXNavigator navigator];
    EXRegistrationToole* reg = nav.regToole;
    
    [reg            from: @"TabBarController"
                  parent:nil
        toViewController: [TabBarController class]
                selector: nil
              transition: 0];
    
    [reg            from: @"Tab1Controller"
                  parent:nil
        toViewController: [Tab1Controller class]
                selector: nil
              transition: 0];
    
    
    [reg            from: @"Tab2Controller"
                  parent:nil
        toViewController: [Tab2Controller class]
                selector: nil
              transition: 0];
    
    
    [reg            from: @"Tab3Controller"
                  parent:nil
        toViewController: [Tab3Controller class]
                selector: nil
              transition: 0];
    
    [reg            from: @"Tab4Controller"
                  parent:nil
        toViewController: [Tab4Controller class]
                selector: nil
              transition: 0];
    
    [reg            from: @"Tab5Controller"
                  parent:nil
        toViewController: [Tab5Controller class]
                selector: nil
              transition: 0];
    
    [reg            from: @"Tab6Controller"
                  parent:nil
        toViewController: [Tab6Controller class]
                selector: nil
              transition: 0];
    
    [reg            from: @"Tab7Controller"
                  parent:nil
        toViewController: [Tab7Controller class]
                selector: nil
              transition: 0];
    
    
}


- (void)addToolsClass
{
    EXNavigator* nav = [EXNavigator navigator];
    EXRegistrationToole* reg = nav.regToole;
    
    [reg            from: @"TextLableController"
                  parent:nil
        toViewController: [TextLableController class]
                selector: nil
              transition: 0];
    
    
    [reg            from: @"ImageLoderController"
                  parent:nil
        toViewController: [ImageLoderController class]
                selector: nil
              transition: 0];
    
    
    [reg            from: @"ComplexImageLoderController"
                  parent:nil
        toViewController: [ComplexImageLoderController class]
                selector: nil
              transition: 0];
}


- (void)addNavigationClass
{
    EXNavigator* nav = [EXNavigator navigator];
    EXRegistrationToole* reg = nav.regToole;
    
    
    [reg            from: @"NavigateionController"
                  parent:nil
        toViewController: [NavigateionController class]
                selector: nil
              transition: 0];
    
    [reg            from: @"NavBarController"
                  parent:nil
        toViewController: [NavBarController class]
                selector: nil
              transition: 0];
}


- (void)addStatusBarHiddenClass
{
    EXNavigator* nav = [EXNavigator navigator];
    EXRegistrationToole* reg = nav.regToole;
    
    
    [reg            from: @"StatusBarHiddenViewController"
                  parent:nil
        toViewController: [StatusBarHiddenViewController class]
                selector: nil
              transition: 0];
    
    [reg            from: @"StatusBarNextPageController"
                  parent:nil
        toViewController: [StatusBarNextPageController class]
                selector: nil
              transition: 0];
}


- (void)addPresentClass
{
    EXNavigator* nav = [EXNavigator navigator];
    EXRegistrationToole* reg = nav.regToole;
    
    
    [reg            from: @"PresentViewController"
                  parent:nil
        toViewController: [PresentViewController class]
                selector: nil
              transition: 0];
    
    [reg            from: @"PresentRootViewController"
                  parent:nil
        toViewController: [PresentRootViewController class]
                selector: nil
              transition: 0];
    
    [reg            from: @"PresentRootViewController"
                  parent:nil
        toViewController: [PresentRootViewController class]
                selector: nil
              transition: 0];
}


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [self setRootController];
    [self addTableClass];
    [self addTabBarClass];
    [self addToolsClass];
    [self addNavigationClass];
    [self addStatusBarHiddenClass];
    [self addPresentClass];
    
    return YES;
}

@end
