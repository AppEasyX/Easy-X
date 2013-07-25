//
//  FImageBufferUtility.h
//  SunNote
//
//  Created by jf4444 on 13-3-26.
//  Copyright (c) 2013年 __SUN__. All rights reserved.
//

/**
 *  此工具为单例，管理整个工程的图片加载工，装载多个EXImageBufferUnitGroup的实例（数组形式 ）
 *  -功能为便于管理多个组的图片的下载情况（例如一个controller里面有一个组，可以管理多个controller的图片的加载）
 */

#import <Foundation/Foundation.h>
#import "EXImageBufferUnitGroupModel.h"
#import "EXImageBufferUnitModel.h"

@class EXStatusBarLoader;
@interface EXImageBufferUtility : NSObject {
@private
    NSMutableArray *_imageBufferGroupStack;
    
    EXStatusBarLoaderAnimationType _statusBarLoaderAnimationType;
}

/**
 * 管理所有EXImageBufferUnitGroup的实例，数族元素为EXImageBufferUnitGroupModel的实例
 */
@property (nonatomic, retain, readonly) NSMutableArray *imageBufferGroupStack;

/**
 * 加载图片过程中StatusBar上动画的表现形式
 */
@property (nonatomic, assign) EXStatusBarLoaderAnimationType statusBarLoaderAnimationType;

/**
 *	@brief	初始化ImageBufferUtilty
 *
 *  @return  UnitGroup
 */
+ (EXImageBufferUtility *)shareImageBufferUtilty;


/**
 *	@brief	获取对应randomKey对应的EXImageBufferUnitModel，EXImageBufferUnitModel包含EXImageBufferUnit
 *
 *	@param 	randomKey 为EXImageBufferUnit和EXImageBufferUnitModel对应的key
 *  @return  EXImageBufferUnitModel
 */
- (EXImageBufferUnitModel *)unitRandomKey:(NSString *)randomKey;

/**
 *	@brief	获取对应randomKey对应的EXImageBufferUnitGroupModel，EXImageBufferUnitGroupModel包含EXImageBufferUnitGroup
 *
 *	@param 	randomKey 为EXImageBufferUnit和EXImageBufferUnitModel对应的key
 *  @return  EXImageBufferUnitGroupModel
 */
- (EXImageBufferUnitGroupModel *)unitGroupRandomKey:(NSString *)randomkey;


/**
 *	@brief	将创建的EXImageBufferUnitGroupModel(拥有多个unitModel)EXImageBufferUnitModel（会在push的时候自动创建EXImageBufferUnitGroupModel）或者进行压栈操作,返回微EXImageBufferUnitGroupModel的key
 *
 *	@param 	utilityModel 为EXImageBufferUnitGroupModel或者EXImageBufferUnitModel
 *	@param 	target 为group对应的delegate或者datasource的回调目标
 */
- (NSString *)pushStackWithImageBufferUnitModel:(id)utilityModel withProctolTarget:(id)target;

/**
 *	@brief	按照压栈顺序自然进行出栈（remove imageBufferGroupStack中的最后一个EXImageBufferUnitGroupModel）
 */
- (void)popStackWithImageBufferUnitGroupModel;

/**
 *	@brief	按照压栈元素个数顺序自然进行出栈（remove imageBufferGroupStack中的最后的count的EXImageBufferUnitGroupModel）
 *
 *	@param 	count 需要几个EXImageBufferUnitGroupModel出栈
 */
- (void)popStackWithImageBufferUnitGroupModelCount:(int)count;

/**
 *	@brief	imageBufferGroupStack中的key为groupkey的EXImageBufferUnitGroupModel出栈
 *
 *	@param 	groupkey EXImageBufferUnitGroupModel对应的key
 */
- (void)popStackWithImageBufferUnitGroupKey:(NSString *)groupkey;

/**
 *	@brief	remove all obj in imageBufferGroupStack
 */
- (void)cleanAllObjOfStack;

@end
