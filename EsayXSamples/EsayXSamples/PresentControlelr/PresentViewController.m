//
//  PresentViewController.m
//  EasyXSamples
//
//  Created by jf4444 on 13-7-23.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "PresentViewController.h"

@interface PresentViewController ()
@property (nonatomic, retain) UIButton *presentButton;

- (void)prepareButtons;
@end

@implementation PresentViewController

@synthesize presentButton = _presentButton;


#pragma mark -
#pragma mark - LIFE_CIRCLE
- (void)dealloc {
    EX_RELEASE_SAFELY(_presentButton);
    
    [super dealloc];
}


- (id)init {
    self = [super init];
    if (self) {
        // custom init
    }
    
    return self;
}


- (void)loadView {
    [super loadView];
}


- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.exNavigationItem.exTitle = @"presentController";
    
    [self prepareButtons];
}


- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    [[self sildeController] slideGestureValid:YES];
}


#pragma mark -
#pragma mark - PREPARE_SUB_VIEWS
- (void)prepareButtons {
    if (_presentButton == nil) {
        _presentButton = [[UIButton buttonWithType:UIButtonTypeRoundedRect] retain];
        _presentButton.frame = CGRectMake(20.0f, 100.0f, 280.0f, 44.0f);
        [_presentButton addTarget:self action:@selector(presentController) forControlEvents:UIControlEventTouchUpInside];
        [_presentButton setTitle:@"presentController" forState:UIControlStateNormal];
    }
    
    [self.view addSubview:_presentButton];
}


#pragma mark -
#pragma mark - BUTTON_CALL_BACK
- (void)presentController {
    EXPresentOpenURL(@"PresentRootViewController");
}

@end
