//
//  StatusBarHiddenViewController.m
//  EasyXSamples
//
//  Created by jf4444 on 13-7-23.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "StatusBarHiddenViewController.h"

@interface StatusBarHiddenViewController ()
@property (nonatomic, retain) UIButton *hiddenStatusBarButton;
@property (nonatomic, retain) UIButton *showStatusBarButton;
@property (nonatomic, retain) UIButton *goToNextPageButton;

- (void)prepareButtons;
@end

@implementation StatusBarHiddenViewController

@synthesize hiddenStatusBarButton = _hiddenStatusBarButton;
@synthesize showStatusBarButton = _showStatusBarButton;
@synthesize goToNextPageButton = _goToNextPageButton;


#pragma mark - 
#pragma mark - LIFE_CIRCLE
- (void)dealloc {
    EX_RELEASE_SAFELY(_hiddenStatusBarButton);
    EX_RELEASE_SAFELY(_showStatusBarButton);
    EX_RELEASE_SAFELY(_goToNextPageButton);
    
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
    
    self.exNavigationItem.exTitle = @"statusBarHidden";
    
    [self prepareButtons];
}


- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    [[self sildeController] slideGestureValid:YES];
}


#pragma mark -
#pragma mark - PREPARE_SUB_VIEWS
- (void)prepareButtons {
    if (_hiddenStatusBarButton == nil) {
        _hiddenStatusBarButton = [[UIButton buttonWithType:UIButtonTypeRoundedRect] retain];
        _hiddenStatusBarButton.frame = CGRectMake(20.0f, 100.0f, 280.0f, 44.0f);
        [_hiddenStatusBarButton addTarget:self action:@selector(hiddenStatusBar) forControlEvents:UIControlEventTouchUpInside];
        [_hiddenStatusBarButton setTitle:@"hiddenStatusBar" forState:UIControlStateNormal];
    }
    
    [self.view addSubview:_hiddenStatusBarButton];
    
    if (_showStatusBarButton == nil) {
        _showStatusBarButton = [[UIButton buttonWithType:UIButtonTypeRoundedRect] retain];
        _showStatusBarButton.frame = CGRectMake(20.0f, 160.0f, 280.0f, 44.0f);
        [_showStatusBarButton addTarget:self action:@selector(showStatusBar) forControlEvents:UIControlEventTouchUpInside];
        [_showStatusBarButton setTitle:@"showStatusBar" forState:UIControlStateNormal];
    }
    
    [self.view addSubview:_showStatusBarButton];
    
    if (_goToNextPageButton == nil) {
        _goToNextPageButton = [[UIButton buttonWithType:UIButtonTypeRoundedRect] retain];
        _goToNextPageButton.frame = CGRectMake(20.0f, 220.0f, 280.0f, 44.0f);
        [_goToNextPageButton addTarget:self action:@selector(goToNextPage) forControlEvents:UIControlEventTouchUpInside];
        [_goToNextPageButton setTitle:@"nextPage" forState:UIControlStateNormal];
    }
    
    [self.view addSubview:_goToNextPageButton];
}


#pragma mark - 
#pragma mark - BUTTON_CALL_BACK
- (void)hiddenStatusBar {
    [[UIApplication sharedApplication] exSetStatusBarHidden:YES withAnimation:UIStatusBarAnimationSlide];
}


- (void)showStatusBar {
    [[UIApplication sharedApplication] exSetStatusBarHidden:NO withAnimation:UIStatusBarAnimationSlide];
}


- (void)goToNextPage {
    EXOpenURL(@"StatusBarNextPageController");
}

@end
