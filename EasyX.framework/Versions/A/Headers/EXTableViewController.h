//
//  EXTableViewController.h
//  EasyX
//
//  Created by feng  on 12-11-1.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXModelViewController.h"

@protocol EXTableViewDataSource;
@class EXTableView;
@class EXView;
@class EXContentView;

@interface EXTableViewController : EXModelViewController {
@protected
    EXTableView*        _tableView;
    EXContentView*       _tableBannerView;
    
    UITableViewStyle    _tableViewStyle;
    
    BOOL                _variableHeightRows;
    
    id<EXTableViewDataSource> _dataSource;
    id<UITableViewDelegate>   _tableDelegate;
}

/**
 * controller的tableView
 */
@property (nonatomic, retain) EXTableView* tableView;

/**
 * 备用
 */
@property (nonatomic, retain) EXView* tableBannerView;

/**
 *  数据模型的来源
 */
@property (nonatomic, retain) id<EXTableViewDataSource> dataSource;


/**
 * controller的tableView的类型
 */
@property (nonatomic) UITableViewStyle tableViewStyle;

/**
 *	@brief	cell被点击后被调用
 *
 *	@param 	controller 	此controller
 *	@param 	indexPath 	点击哪一个cell
 */
- (void)didSelectController:(UIViewController* )controller didSelectRowAtIndexPath:(NSIndexPath*)indexPath;

/**
 *	@brief	刷新table的数据
 */
- (void)reloadData;

@end
