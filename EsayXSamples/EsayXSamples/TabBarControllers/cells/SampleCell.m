//
//  SampleCell.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-13.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "SampleCell.h"
#import "SampleCellModel.h"

@interface SampleCell()
@property (nonatomic, retain) UILabel *sampleTextLabel;
@end

@implementation SampleCell

@synthesize sampleTextLabel = _sampleTextLabel;

- (void)dealloc {
    EX_RELEASE_SAFELY(_sampleTextLabel);
    
    [super dealloc];
}


- (id)initWithStyle:(UITableViewCellStyle)style
    reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
		self.accessoryType = UITableViewCellAccessoryNone;
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        
        self.backgroundColor = [UIColor clearColor];
        self.contentView.backgroundColor = [UIColor clearColor];
        
        _sampleTextLabel = [[UILabel alloc] init];
        _sampleTextLabel.backgroundColor = [UIColor clearColor];
        _sampleTextLabel.numberOfLines = 100;
        [self.contentView addSubview:_sampleTextLabel];
	}
    
	return self;
}


- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cellForData:(id)data {
    [super tableView:tableView cellForRowAtIndexPath:indexPath cellForData:data];
    
    SampleCellModel *model = data;
    self.textLabel.text = [NSString stringWithFormat:@"section:%d row:%d",model.dataIndexPath.section,model.dataIndexPath.row];

    [self.contentView bringSubviewToFront:_sampleTextLabel];
    _sampleTextLabel.frame = CGRectMake(230.0f, 0.0f, 90.0f, 100.0f);
    _sampleTextLabel.text = model.testSampleCellData;
}


+ (CGFloat)tableView:(UITableView*)tableView rowHeightForObject:(id)object heightForRowAtIndexPath:(NSIndexPath*)indexPath {
    float cellHeight = 0.0f;
    cellHeight = 100.0f;
    
    return cellHeight;
}

@end
