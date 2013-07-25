//
//  EXVerticalIndiactorImageView.h
//  SunNote
//
//  Created by jf4444 on 13-4-25.
//
//

#import <UIKit/UIKit.h>

/**
 *  自定义UIScrollView(以下简称scroll)的verticalScrollIndicator
 *  -在系统的控件的基础上支持了一些自定义的扩充，包括支持拖拽，一直显示，设置距离scroll的上边界和下边界
 *  -开发人员若想将系统的控件换成此自定义控件，只需调用scroll的customVerticalIndiactor即可
 *  -若你需要实现scrollView的delegate方法，需要super这个方法
 *  -开发人员也可以按照一般UIKIt的控件使用方式使用此控件(alloc init)
 *  -默认控件为支持拖拽，停止滚动消失，距离上边距和下边距为0.0f，若想改变显示需要设置此属性
 *  -scroll的frame宽最小为100.0f，高为55.0f
 *  -背景图片(见framwWork对用bundle)，请保证top和bottom以及body的图片的宽度和相等，以及top和bottom的高相等，且top和bottom的高不能大于25.0f
 */

#define CUSTOM_VERTIACL_INDIACTOR    (@"custom_vertical_indiactor")
#define VERTICAL_INDIACTOR_KEY       (@"vertical_indiactor_key")

@interface EXVerticalIndiactorImageView : UIButton {
@private
    BOOL _canDrag;
    float _topSpacing;
    float _bottomSpacing;
    BOOL _alwaysShow;
    BOOL _hiddenAllTheTime;
    
    float _privateBottomSpacing;
    float _selfHeight;
    float _selfWidth;
    float _lastContentSizeHeight;
    UIScrollView *_targetSvroll;
    CGPoint _startPoint;
    BOOL _showSelf;
    BOOL _needOrgihnSelfLenth;
    BOOL _selfTouching;
    UIImageView *_headImgView;
    UIImageView *_bodyImgView;
    UIImageView *_bottomImgView;
    
    BOOL _delayHiddenScrollRetainTag;
}
/**
 * 距离上边的距离
 */
@property (nonatomic, assign) float topSpacing;

/**
 * 距离底部的距离
 */
@property (nonatomic, assign) float bottomSpacing;

/**
 * 是否支持拖拽
 */
@property (nonatomic, assign) BOOL canDrag;

/**
 * 是否一直显示
 */
@property (nonatomic, assign) BOOL alwaysShow;

/**
 * 是否一直不显示
 */
@property (nonatomic, assign) BOOL hiddenAllTheTime;

/**
 *  初始化方法
 *  -开发人员若想将系统的控件换成此自定义控件，只需调用scroll的customVerticalIndiactor即可
 *  -开发人员也可以按照一般UIKIt的控件使用方式使用此控件(initWithScrollView:)
 *  @param initWithScrollView: scrollView 需要自定义的scroll
 *  @return 自定义的horizontalScrollIndicator
 */
- (id)initWithScrollView:(UIScrollView *)scrollView;

@end
