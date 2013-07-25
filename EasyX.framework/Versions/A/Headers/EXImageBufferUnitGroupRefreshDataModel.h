//
//  EXImageBufferUnitGroupRefreshDataModel.h
//  SunNote
//
//  Created by jf4444 on 13-4-2.
//
//

/**
 *  下载图片时返回的数据model
 */

#import <Foundation/Foundation.h>

@class EXImageBufferUnitGroup,EXImageBufferUnit;
@interface EXImageBufferUnitGroupRefreshDataModel : NSObject {
@private
    NSString *_unitRefreshDataUnitGroupRandomKey;
    NSString *_unitRefreshDataUnitRandomKey;
    NSDictionary *_dataDict;
    NSDictionary *_curSingleImgDataDict;
    BOOL _unitAllImgLoadDone;
    EXImageBufferUnitGroup *_curBufferUnitGroup;
    EXImageBufferUnit *_curBufferUnit;
}


/**
 * EXImageBufferUnitGroup的groupRandomKey
 */
@property (nonatomic, copy) NSString *unitRefreshDataUnitGroupRandomKey;

/**
 * EXImageBufferUnit的randomKey
 */
@property (nonatomic, copy) NSString *unitRefreshDataUnitRandomKey;

/**
 * 当FImageBufferUnitLoadRefreshMode＝＝FImageBufferUnitLoadRefreshMode_WithoutDelay的时候，此dict为对应的值
 */
@property (nonatomic, retain) NSDictionary *curSingleImgDataDict;

/**
 * EXImageBufferUnitGroup中的EXImageBufferUnit的对应数据
 */
@property (nonatomic, retain) NSDictionary *dataDict;

/**
 * EXImageBufferUnitGroup中的EXImageBufferUnit的对应数据是否完全加载完成
 */
@property (nonatomic, assign) BOOL unitAllImgLoadDone;

/**
 * 当前回调的EXImageBufferUnitGroup
 */
@property (nonatomic, assign) EXImageBufferUnitGroup *curBufferUnitGroup;

/**
 * 当前回调的EXImageBufferUnit
 */
@property (nonatomic, assign) EXImageBufferUnit *curBufferUnit;

@end
