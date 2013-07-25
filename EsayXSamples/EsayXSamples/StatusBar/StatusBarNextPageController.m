//
//  StatusBarNextPageController.m
//  EasyXSamples
//
//  Created by jf4444 on 13-7-23.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "StatusBarNextPageController.h"

@interface StatusBarNextPageController ()

@end

@implementation StatusBarNextPageController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.exNavigationItem.exTitle = @"next";
    
	// Do any additional setup after loading the view.
    
    [[self sildeController] slideGestureValid:NO];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
