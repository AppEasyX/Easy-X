//
//  EXPresentController.m
//  Four20
//
//  Created by feng lu on 13-7-22.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "EXPresentController.h"
#import "EXBaseNavigator.h"
#import "EXDefines.h"
#import "EXNavigator.h"
#import "EXNavigationViewController.h"
#import "EXRegistrationToole.h"

@interface EXPresentController ()
@property(nonatomic, retain) NSMutableArray*                 controllers;
@end

static EXPresentController* gPresent = nil;

@implementation EXPresentController
@synthesize controllers = _controllers;


-(void)dealloc
{
    EX_RELEASE_SAFELY(_controllers);
    [super dealloc];
}

+ (id)present
{
    if (nil == gPresent) {
        gPresent = [[[EXPresentController alloc] init] autorelease];
        
        EXNavigator* nav = [EXNavigator navigator];
        EXRegistrationToole* map = nav.regToole;
        
        
        [map            from: @"EXPresentController"
                      parent:nil
            toViewController: [EXPresentController class]
                    selector: nil
                  transition: 0];

    }
    
    return gPresent;
}

- (id)init
{
    if (self = [super init]) {
        self.controllers = [[[NSMutableArray alloc]initWithCapacity:1] autorelease];
    }
    
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.view setBackgroundColor:[UIColor whiteColor]];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
//    UIViewController* navController = [_controllers lastObject];
//    if (navController) {
//        [self.view addSubview:navController.view];
//    }
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    UIViewController* navController = [_controllers lastObject];
    if (navController) {
        [self.view addSubview:navController.view];
    }
}


- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}



#pragma mark - 
#pragma mark - push present
- (void)presentModalViewURL:(NSString*)URL animated:(BOOL)animated
{
    EXOpenURL(@"EXPresentController");
//    [[[EXNavigator navigator] window] addSubview:self.view];
    UIViewController* controller = [[EXNavigator navigator] viewControllerForURL:URL];
    UIViewController* navController = nil;
    if (controller) {
        navController = [self rootControllerForController:controller];
        [_controllers addObject:navController];
    }

//    if (navController) {
//        [self.view addSubview:navController.view];
//    }
}


- (UIViewController*)rootControllerForController:(UIViewController*)controller {
    
    EXNavigationViewController* navController = [[[EXNavigationViewController alloc] init] autorelease];
    //        NSLog(@"%@",navController.view);
    [navController.navigationStackController pushViewController:controller animated:NO];
    return navController;
    
}

@end
