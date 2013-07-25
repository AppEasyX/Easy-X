//
//  PresentRootViewController.m
//  EasyXSamples
//
//  Created by jf4444 on 13-7-23.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "PresentRootViewController.h"
#import "PresentNextpageController.h"

@interface PresentRootViewController ()
@property (nonatomic, retain) UIButton *pushButton;
@property (nonatomic, retain) UIButton *dismissButton;
- (void)prepareButtons;
@end

@implementation PresentRootViewController

@synthesize pushButton = _pushButton;
@synthesize dismissButton = _dismissButton;


#pragma mark -
#pragma mark - LIFE_CIRCLE
- (void)dealloc {
    EX_RELEASE_SAFELY(_pushButton);
    EX_RELEASE_SAFELY(_dismissButton);
    
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
    
    self.exNavigationItem.exTitle = @"push";
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    [self prepareButtons];
}


- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    [[self sildeController] slideGestureValid:NO];
}


#pragma mark -
#pragma mark - PREPARE_SUB_VIEWS
- (void)prepareButtons {
    if (_pushButton == nil) {
        _pushButton = [[UIButton buttonWithType:UIButtonTypeRoundedRect] retain];
        _pushButton.frame = CGRectMake(20.0f, 100.0f, 280.0f, 44.0f);
        [_pushButton addTarget:self action:@selector(pushAction) forControlEvents:UIControlEventTouchUpInside];
        [_pushButton setTitle:@"push" forState:UIControlStateNormal];
    }
    
    [self.view addSubview:_pushButton];
    
    if (_dismissButton == nil) {
        _dismissButton = [[UIButton buttonWithType:UIButtonTypeRoundedRect] retain];
        _dismissButton.frame = CGRectMake(20.0f, 160.0f, 280.0f, 44.0f);
        [_dismissButton addTarget:self action:@selector(dismiss) forControlEvents:UIControlEventTouchUpInside];
        [_dismissButton setTitle:@"dismiss" forState:UIControlStateNormal];
    }
    
    [self.view addSubview:_dismissButton];
}


#pragma mark -
#pragma mark - BUTTON_CALL_BACK
- (void)pushAction {
    PresentNextpageController *presentC = [[PresentNextpageController alloc] init];
    [self.navigationController pushViewController:presentC animated:YES];
    [presentC release];
}


- (void)dismiss {
    EXDismissPresen(YES);
}

@end
