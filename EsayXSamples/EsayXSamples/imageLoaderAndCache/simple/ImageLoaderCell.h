//
//  ImageLoaderCell.h
//  EasyXSamples
//
//  Created by jf4444 on 13-7-2.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXSampleActivityModel.h"

@interface ImageLoaderCell : EXTableCustomCell {    
    UIImageView *_goodsFaceImageView;
}

@property (nonatomic, retain) UIImageView *goodsFaceImageView;

- (id)initWithStyle:(UITableViewCellStyle)style
    reuseIdentifier:(NSString *)reuseIdentifier;

@end
