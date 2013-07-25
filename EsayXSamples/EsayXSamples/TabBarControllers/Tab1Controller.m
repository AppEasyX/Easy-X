//
//  Tab1Controller.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "Tab1Controller.h"

@interface Tab1Controller ()

@end

@implementation Tab1Controller


#pragma mark - 
#pragma mark - CONTROLLER_LIFE_CIRCLE



- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.exNavigationItem.exTitle = @"Table View";
    [self.view setBackgroundColor:[UIColor whiteColor]];
    
    [self prepareForButton];
}


- (void)prepareForButton
{
    UIButton* hiddenBar = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [hiddenBar setFrame:CGRectMake(10, 50, 300, 40)];
    [hiddenBar setTitle:@"hidden TabBar" forState:UIControlStateNormal];
    [hiddenBar addTarget:self action:@selector(hiddenTabBar) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:hiddenBar];
    
    
    UIButton* showBar = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [showBar setFrame:CGRectMake(10, 110, 300, 40)];
    [showBar setTitle:@"show TabBar" forState:UIControlStateNormal];
    [showBar addTarget:self action:@selector(showTabBar) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:showBar];
}


- (void)hiddenTabBar
{
    [self.tabBarController setTabBarHidden:YES animated:YES];
}


- (void)showTabBar
{
    [self.tabBarController setTabBarHidden:NO animated:YES];
}

@end
