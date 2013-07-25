//
//  Tab1Controller.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "SampleCustomAddTableController.h"

#define CELL_SIZE_H  (80.0f)

@interface SampleCustomAddTableController ()
@property (nonatomic, retain) EXTableView *tableView;

- (void)prepareTableView;
@end

@implementation SampleCustomAddTableController

@synthesize tableView = _tableView;

#pragma mark - 
#pragma mark - CONTROLLER_LIFE_CIRCLE
- (void)dealloc {
    DLog(@"");
    EX_RELEASE_SAFELY(_tableView);
    
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


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.exNavigationItem.exTitle = @"addedTable";
    
    [self prepareTableView];
}


- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.sildeController slideGestureValid:YES];
}


- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    
    [self.sildeController slideGestureValid:NO];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


- (void)viewDidUnload {
    [super viewDidUnload];
}


#pragma mark -
#pragma mark - PREPARE_SUB_VIEWS
- (void)prepareTableView {
    if (_tableView == nil) {
        CGRect viewFrame = self.view.bounds;
        
        _tableView = [[EXTableView alloc] initWithFrame:viewFrame style:UITableViewStylePlain];
        _tableView.autoresizingMask = UIViewAutoresizingFlexibleHeight;
        _tableView.delegate = self;
        _tableView.dataSource = self;
    }
    
    [self.view addSubview:_tableView];
}


#pragma mark -
#pragma mark - TABLE_DELEGATE_AND_DATASOURCE
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {    
    return 1;
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 50;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    static NSString *CellIdentifier = @"Cell";
    
    UITableViewCell *cell = (UITableViewCell *)[tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    
    if (!cell) {
        cell = [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1
                                      reuseIdentifier:CellIdentifier] autorelease];
    }
    
    cell.textLabel.text = [NSString stringWithFormat:@"%d",indexPath.row];
    
    return cell;
}


- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return CELL_SIZE_H;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
   
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
    
    NSLog(@"stopScroll");
}


#pragma mark - 
#pragma mark - SHOW_SLIDE_VIEW
- (void)showSlideView {
    // 打开slideView
    [[self sildeController] showLeftViewController:nil];
}

@end
