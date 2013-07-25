//
//  EXSampleActivityCell.h
//  EsayXSamples
//
//  Created by jf4444 on 12-8-31.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXSampleActivityModel.h"

@class EXSampleImageLoadImageView;
@interface EXSampleActivityCell : EXTableCustomCell {
    EXSampleActivityModel *_activityModel;
    
    EXSampleImageLoadImageView *_goodsFaceImageView;
    
    UIView *_infoDisplayView;
    
    UILabel *_brandLabel;
    UILabel *_t0Label;
    UILabel *_t1Label;
    UILabel *_t2Label;
}

@property (nonatomic, assign) EXSampleActivityModel *activityModel;
@property (nonatomic, retain) EXSampleImageLoadImageView *goodsFaceImageView;

- (id)initWithStyle:(UITableViewCellStyle)style
    reuseIdentifier:(NSString *)reuseIdentifier;

@end
