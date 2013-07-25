//
//  NavigateionController.m
//  EasyXSamples
//
//  Created by feng lu on 13-7-18.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "NavigateionController.h"

@interface NavigateionController ()

@end

@implementation NavigateionController


- (void)viewDidLoad
{
    [super viewDidLoad];
	self.exNavigationItem.exTitle = @"Navigateion";
    [self.view setBackgroundColor:[UIColor whiteColor]];
    
    [self prepareForButton];
}


- (void)prepareForButton
{
    UIButton* hiddenBar = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [hiddenBar setFrame:CGRectMake(10, 50, 300, 40)];
    [hiddenBar setTitle:@"hidden Navigateion Bar" forState:UIControlStateNormal];
    [hiddenBar addTarget:self action:@selector(hiddenTabBar) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:hiddenBar];
    
    
    UIButton* showBar = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [showBar setFrame:CGRectMake(10, 110, 300, 40)];
    [showBar setTitle:@"show Navigateion Bar" forState:UIControlStateNormal];
    [showBar addTarget:self action:@selector(showTabBar) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:showBar];
    
    
    UIButton* openCon = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [openCon setFrame:CGRectMake(10, 170, 300, 40)];
    [openCon setTitle:@"Open Next Page" forState:UIControlStateNormal];
    [openCon addTarget:self action:@selector(openNextPage) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:openCon];
}


#pragma mark -
#pragma mark - BUTTON
- (void)hiddenTabBar
{
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}


- (void)showTabBar
{
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}



- (void)openNextPage
{
    EXOpenURL(@"NavBarController");
}

@end
