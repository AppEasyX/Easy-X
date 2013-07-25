//
//  FImageBufferUnitModel.h
//  SunNote
//
//  Created by jf4444 on 13-4-2.
//
//

/**
 *  创建需要加载的图片数据时，此model包含EXImageBufferUnit以及EXImageBufferUnit对应的数据
 */

#import <Foundation/Foundation.h>

@class EXImageBufferUnit;
@interface EXImageBufferUnitModel : NSObject {
@private
    NSString *_randomKey;
    float _unitTimerInterval;
    EXImageBufferUnit *_bufferUnitObj;
    NSArray *_dataImgUrls;
    BOOL _curUnitRunning;
    NSDictionary *_unitTargetDict;
    EXImageBufferUnitLoadRefreshMode _unitLoadRefreshMode;
}

/**
 * EXImageBufferUnit和EXImageBufferUnitModel的key，只读
 */
@property (nonatomic, copy, readonly) NSString *randomKey;

/**
 * EXImageBufferUnit和EXImageBufferUnitModel的加载图片轮循时间
 */
@property (nonatomic, assign) float unitTimerInterval;

/**
 * EXImageBufferUnitModel中的的EXImageBufferUnit，创建EXImageBufferUnitModel的时候会被自动创建
 */
@property (nonatomic, retain, readonly) EXImageBufferUnit *bufferUnitObj;

/**
 * EXImageBufferUnit的加载数据的pic的urls的数组（当然也可用dataSorce的sel设置）
 */
@property (nonatomic, retain) NSArray *dataImgUrls;

/**
 * 当前的unit是不是正在轮循
 */
@property (nonatomic, assign, readonly) BOOL curUnitRunning;

/**
 * unit对应的数据（key为url value为对应的pic）
 */
@property (nonatomic, assign, readonly) NSDictionary *unitTargetDict;

/**
 * 当前的unit的unitLoadRefreshMode
 */
@property (nonatomic, assign) EXImageBufferUnitLoadRefreshMode unitLoadRefreshMode;

@end
