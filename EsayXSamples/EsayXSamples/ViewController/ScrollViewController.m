//
//  ScrollViewController.m
//  EasyXSamples
//
//  Created by feng lu on 13-7-19.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "ScrollViewController.h"

@interface ScrollViewController ()
@property(nonatomic, retain) UIScrollView*           scrollView;
@end

@implementation ScrollViewController
@synthesize scrollView = _scrollView;


- (void)dealloc
{
    EX_RELEASE_SAFELY(_scrollView);
    [super dealloc];
}


- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.sildeController slideGestureValid:NO];
}


- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    
    [self.sildeController slideGestureValid:YES];
}


- (void)viewDidLoad
{
    [super viewDidLoad];
    self.exNavigationItem.exTitle = @"Scroll Indiactor";
    
    [self prepareScrollView];
}



- (void)prepareScrollView
{
    if (!_scrollView) {
        self.scrollView = [[[UIScrollView alloc] initWithFrame:self.view.bounds] autorelease];
        
    }
    _scrollView.pagingEnabled = YES; 
    _scrollView.backgroundColor = [UIColor grayColor];
    _scrollView.contentSize = CGSizeMake(320, 2000);
    [self.view addSubview:_scrollView];
    
    // 替换系统的tableView的滚动条
    // 这里的垂直滚动条支持手指拖动，很方便的滑过整个屏幕，特别是在较长内容的翻滚中
    _scrollView.customVerticalIndiactor = YES;
}


- (void)showSlideView {
    // 打开slideView
    [[self sildeController] showLeftViewController:nil];
}

#pragma mark -
#pragma mark - SCROLL_DELEGATE
- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    [super scrollViewDidScroll:scrollView];
    
    [self.sildeController slideGestureValid:NO];
}


- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView {
    [super scrollViewDidEndDecelerating:scrollView];
    
    [self.sildeController slideGestureValid:YES];
}

@end
