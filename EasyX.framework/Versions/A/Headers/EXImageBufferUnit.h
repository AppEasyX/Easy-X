//
//  FImageBufferUnit.h
//  SunNote
//
//  Created by jf4444 on 13-3-26.
//  Copyright (c) 2013年 __SUN__. All rights reserved.
//

/**
 *  图片加载工具的最小单元
 *  -功能为实现图片的下载以及完成disc存储
 *  -此控件可以单独使用
 *  -通过模拟tableView的delegate和datasource方式来完成刷新数据（delegate sels）和读取数据源头（datasource sels）
 */

#import <Foundation/Foundation.h>
#import "EXImageMan.h"
#import "EXImageBufferUnitDataSource.h"
#import "EXImageBufferUnitDelegate.h"

@interface EXImageBufferUnit : NSObject<EXImageManDelegate> {
@public
@private
    id <EXImageBufferUnitDataSource>_dataSource;
    id <EXImageBufferUnitDelegate>_delegate;
    NSMutableDictionary *_targetDict;
    
    NSString *_unitRandomKey;
    EXImageMan *_imageMan;
    
    NSArray *_orighArr;
    
    NSTimer *_loadPicTimer;
    NSTimeInterval _interval;
    
    BOOL _curRuning;
    BOOL _isLoadDone;
    
    EXImageBufferUnitLoadRefreshMode _curUnitLoadRefreshMode;
    BOOL _withoutDelayModelTag;
}

/**
 * 刷新读取的数据源的代理
 */
@property (nonatomic, assign) id <EXImageBufferUnitDataSource>dataSource;

/**
 * 刷新数据源的代理
 */
@property (nonatomic, assign) id <EXImageBufferUnitDelegate>delegate;

/**
 * 设置轮训调用delegate刷新数据的时间(EXImageBufferUnitLoadRefreshMode_RoundRobin)下有效
 */
@property (nonatomic, assign) NSTimeInterval interval;

/**
 * datasource对应的数据
 */
@property (nonatomic, assign) NSArray *orighArr;

/**
 * delegate返回的以获取的图片数据(key为pic的url，value为图片)
 */
@property (nonatomic, retain, readonly) NSMutableDictionary *targetDict;

/**
 * 唯一标示此unit的标识
 */
@property (nonatomic, copy, readonly) NSString *unitRandomKey;

/**
 * unit是不是正在运行 
 */
@property (nonatomic, assign, readonly) BOOL curRuning;

/**
 * 是不是orighArr（数据源）里面对应的图片已经完全加载
 */
@property (nonatomic, assign, readonly) BOOL isLoadDone;

/**
 * 设置按照interval（设置轮训调用delegate刷新数据的时间）来刷新数据还是图片加载完成及时通知目标代理刷新数据
 */
@property (nonatomic, assign) EXImageBufferUnitLoadRefreshMode curUnitLoadRefreshMode;


/**
 *	@brief	初始化imgbufferunit
 *
 *	@param 	timerInterval 	轮训调用delegate刷新数据的时间(EXImageBufferUnitLoadRefreshMode_RoundRobin)下有效
 *	@param 	randomKey 	唯一标示此unit的标识
 *  @return  imgbufferunit
 */
- (id)initWithInterval:(NSTimeInterval)timerInterval unitRandomKey:(NSString *)randomKey;

/**
 *	@brief	启动imgbufferunit
 */
- (void)run;

/**
 *	@brief	停止,会清空内存中的图片的缓存
 */
- (void)stopAndClearBuffer;

/**
 *	@brief	暂停,会保留内存中的图片的缓存
 */
- (void)pause;

/**
 *	@brief	停止读取dataSource
 */
- (void)stopReadDataSource;

/**
 *	@brief	启动读取dataSource(默认为启动，此方法适用于stopReadDataSource之后想启动读取)
 *	@param 	target  delegate回调的对象 
 */
- (void)beginReadDataSourceWithTarget:(id)target;

@end
