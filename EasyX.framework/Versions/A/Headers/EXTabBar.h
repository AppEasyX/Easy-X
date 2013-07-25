//
//  EXTabBar.h
//  EasyX
//
//  Created by feng lu on 12-11-26.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXView.h"


@protocol EXTabDelegate;

@interface EXTabBar : EXView
{
    NSInteger               _selectedTabIndex;        
    NSArray *               _tabItems;                
    NSMutableArray *        _tabs;
    UIImageView *           _moretTabViewBacView;
    UIScrollView *          _moreTabView;
    BOOL                    _moreViewShow;
        
    id<EXTabDelegate>       _delegate;
}

@property (nonatomic, retain)     NSArray*    tabItems;

@property (nonatomic) BOOL              moreViewShow;

@property (nonatomic, assign)   id<EXTabDelegate> delegate;
/**
 *	@brief	给相应的tab添加badge值
 *
 *	@param 	number 	badge值，可以是数字、字符、文字等
 *	@param 	index 	tab的index值
 */
- (void)setBadgeView:(UIView *)badge tabBarIndex:(NSUInteger)index;


/**
 *	@brief	设置选中的tab的index
 *
 *	@param 	index 	选中的tab的index
 */
- (void)selectTab:(NSInteger)index;



- (void)reloadBadgeView;

@end
