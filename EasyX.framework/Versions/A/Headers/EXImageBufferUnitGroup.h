//
//  EXImageBufferUnitGroup.h
//  SunNote
//
//  Created by jf4444 on 13-3-26.
//  Copyright (c) 2013年 __SUN__. All rights reserved.
//

/**
 *  图片加载工具的组工具，装载多个EXImageBufferUnit的实例（数组形式 ）
 *  -功能为便于管理一个界面多组图片的下载情况（例如列表上面为一组可以滚动的图片，列表本身也是一组图片）
 *  -此控件也可单独使用
 *  -通过模拟tableView的delegate和datasource方式来完成刷新数据（delegate sels）和读取数据源头（datasource sels）
 */

#import <Foundation/Foundation.h>
#import "EXImageBufferUnitGroupDelegate.h"
#import "EXImageBufferUnitGroupDataSource.h"
#import "EXImageBufferUnitDataSource.h"
#import "EXImageBufferUnitDelegate.h"

@class EXImageBufferUnit;
@interface EXImageBufferUnitGroup : NSObject<EXImageBufferUnitDataSource,EXImageBufferUnitDelegate> {
@private
    NSArray *_bufferUnitObjArr;
    NSString *_unitGroupKey;
    id <EXImageBufferUnitGroupDelegate>_unitGroupDelegate;
    id <EXImageBufferUnitGroupDataSource>_unitGroupDataSource;
}

/**
 * datasource对应的数据，装载多个EXImageBufferUnit的实例
 */
@property (nonatomic, assign) NSArray *bufferUnitObjArr;

/**
 * 唯一标示此unitGroup的标识
 */
@property (nonatomic, copy, readonly) NSString *unitGroupKey;

/**
 * 刷新数据源的代理
 */
@property (nonatomic, assign) id <EXImageBufferUnitGroupDelegate>unitGroupDelegate;

/**
 * 刷新读取的数据源的代理
 */
@property (nonatomic, assign) id <EXImageBufferUnitGroupDataSource>unitGroupDataSource;


/**
 *	@brief	初始化UnitGroup
 *
 *	@param 	groupkey 此group对应的key（唯一标示此group的标识）
 *  @return  UnitGroup
 */
- (id)initWithUnitGroupKey:(NSString *)groupkey;

/**
 *	@brief	run所有的unit
 */
- (void)runAll;

/**
 *	@brief	run bufferUnitObjArr对应索引unitIndex的unit
 */
- (void)runWithUnitIndex:(int)unitIndex;

/**
 *	@brief	run bufferUnitObjArr对应uint key为randomKey的unit
 */
- (void)runWithUnitRandomKey:(NSString *)randomKey;



/**
 *	@brief	stop所有的unit
 */
- (void)stopAndClearAllBuffer;

/**
 *	@brief	stop bufferUnitObjArr对应索引unitIndex的unit
 */
- (void)stopWithUnitIndex:(int)unitIndex;

/**
 *	@brief	stop bufferUnitObjArr对应uint key为randomKey的unit
 */
- (void)stopWithUnitRandomKey:(NSString *)randomKey;


/**
 *	@brief	pause所有的unit
 */
- (void)pauseAll;

/**
 *	@brief	pause bufferUnitObjArr对应索引unitIndex的unit
 */
- (void)pauseWithUnitIndex:(int)unitIndex;

/**
 *	@brief	pause bufferUnitObjArr对应uint key为randomKey的unit
 */
- (void)pauseWithUnitRandomKey:(NSString *)randomKey;



/**
 *	@brief	stop读取所有的unit的dataSource
 */
- (void)stopReadAllDataSource;

/**
 *	@brief	stop读取 bufferUnitObjArr对应索引unitIndex的unit
 */
- (void)stopReadDataSourceWithUnitIndex:(int)unitIndex;

/**
 *	@brief	stop读取 bufferUnitObjArr对应uint key为randomKey的unit
 */
- (void)stopReadDataSourceWithUnitRandomKey:(NSString *)randomKey;


/**
 *	@brief	begin读取所有的unit的dataSource
 */
- (void)beginReadAllDataSource;

/**
 *	@brief	begin读取 bufferUnitObjArr对应索引unitIndex的unit
 */
- (void)beginReadDataSourceWithUnitIndex:(int)unitIndex;

/**
 *	@brief	begin读取 bufferUnitObjArr对应uint key为randomKey的unit
 */
- (void)beginReadDataSourceWithUnitRandomKey:(NSString *)randomKey;

@end
