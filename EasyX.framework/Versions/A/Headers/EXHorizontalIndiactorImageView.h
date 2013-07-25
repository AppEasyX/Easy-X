//
//  EXHorizontalIndiactorImageView.h
//  SunNote
//
//  Created by 贾 飞 on 13-5-11.
//
//


/**
 *  自定义UIScrollView(以下简称scroll)的horizontalScrollIndicator
 *  -在系统的控件的基础上支持了一些自定义的扩充，包括支持拖拽，一直显示，设置距离scroll的左边界和右边界
 *  -若你需要实现scrollView的delegate方法，需要super这个方法
 *  -开发人员若想将系统的控件换成此自定义控件，只需调用scroll的customHorizontalIndiactor即可
 *  -开发人员也可以按照一般UIKIt的控件使用方式使用此控件(alloc init)
 *  -默认控件为支持拖拽，停止滚动消失，距离左边距和右 边距为0.0f，若想改变显示需要设置此属性
 *  -scroll的frame宽最小为100.0f，高为55.0f
 *  -背景图片(见framwWork对用bundle)，请保证left和right以及body的图片的宽度和相等，以及left和right的高相等，且left和right的高不能大于25.0f
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define CUSTOM_HORIZONTAL_INDIACTOR    (@"custom_horizontal_indiactor")
#define HORIZONTAL_INDIACTOR_KEY       (@"horizontal_indiactor_key")

@interface EXHorizontalIndiactorImageView : UIButton {
@private
    BOOL _canDrag;
    float _leftSpacing;
    float _rightSpacing;
    BOOL _alwaysShow;
    BOOL _hiddenAllTheTime;
    
    float _privateRightSpacing;
    float _selfHeight;
    float _selfWidth;
    float _lastContentSizeWidth;
    UIScrollView *_targetSvroll;
    CGPoint _startPoint;
    BOOL _showSelf;
    BOOL _needOrgihnSelfLenth;
    BOOL _selfTouching;
    UIImageView *_leftImgView;
    UIImageView *_bodyImgView;
    UIImageView *_rightImgView;
    
    BOOL _delayHiddenScrollRetainTag;
}
/**
 * 距离左边的距离
 */
@property (nonatomic, assign) float leftSpacing;

/**
 * 距离右边的距离
 */
@property (nonatomic, assign) float rightSpacing;

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
 *  @param initWithScrollView: scrollView 需要自定义的scroll
 *  -开发人员若想将系统的控件换成此自定义控件，只需调用scroll的customHorizontalIndiactor即可
 *  -开发人员也可以按照一般UIKIt的控件使用方式使用此控件(initWithScrollView:)
 *  @return 自定义的horizontalScrollIndicator
 */
- (id)initWithScrollView:(UIScrollView *)scrollView;

@end
