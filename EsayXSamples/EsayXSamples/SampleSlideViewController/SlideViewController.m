//
//  SlideViewController.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "SlideViewController.h"
#import "SlideCellModel.h"
#import "SlideCell.h"

@interface SlideViewController ()

@end

@implementation SlideViewController


- (void)viewDidLoad {
    [super viewDidLoad];
}


- (void)viewDidUnload {
    [super viewDidUnload];
}


- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}


- (void)createModel {
    
    EXSectionedDataSource* sectionedDataSource = [EXSectionedDataSource dataSourceWithObjects];
    
    //这里可以为自定义cell定制一个id类型的对象，并且会在自定义cell中接收到它
    //同样，你也可以自定义一个数据类型传递给Model，只要是来自于NSObject
    NSString* custom = @"CustomCell";
    NSString* push = @"PushCell";
    
    [sectionedDataSource addItems:
     [EXSlideItem itemWithCell:[SlideCell class] Model:custom delegate:self URL:@"TableCustomController"],
     [EXSlideItem itemWithCell:[SlideCell class] Model:push delegate:self URL:@"TablePushController"],
     nil];
    
    
    //这里EXSlideItem使用了不同的方法，使得的创建item成为驻留在内存中
    //当每次通过slide切换controller时也不会释放这个URL所指向的类
    //这里的规律是share或者item开头的函数，分别代表切换时不释放与切换时及时释放
    //如此可以保证内存灵活控制
    NSString* tab = @"TabBar";
    [sectionedDataSource addItems:
     [EXSlideItem shareWithCell:[SlideCell class] Model:tab delegate:self
                            URL:@"TabBarController"],
     [EXSlideItem itemWithText:@"NaviBar" delegate:self URL:@"NavigateionController"],
     nil];
    
    
    
    //这里使用框架定义的textcell，通过传递itemWithText参数显示元素名称
    [sectionedDataSource addItems:
     [EXSlideItem itemWithText:@"TextLable" delegate:self URL:@"TextLableController"],
     [EXSlideItem itemWithText:@"ImgLoder" delegate:self URL:@"ImageLoderController"],
     [EXSlideItem itemWithText:@"ComplexImgLoder" delegate:self URL:@"ComplexImageLoderController"],
     [EXSlideItem itemWithText:@"ScrollViewController" delegate:self URL:@"ScrollViewController"],
     [EXSlideItem itemWithText:@"StatusBar" delegate:self URL:@"StatusBarHiddenViewController"],
     [EXSlideItem itemWithText:@"PresentController" delegate:self URL:@"PresentViewController"],
     nil];

    
    [sectionedDataSource addSections:@"table", @"bar", @"tools", nil];
    
    self.dataSource = sectionedDataSource;
}



- (void)slideViewDidScroll:(EXSlideViewController *)controller {
    DLog(@"%@", controller);
}


- (void)slideViewDidReturn:(EXSlideViewController *)controller {
    DLog(@"%@", controller);
}


- (void)slideViewDidOpen:(EXSlideViewController *)controller {
    DLog(@"%@", controller);
}


- (void)tableView:(UITableView*)tableView didSelectRowAtIndexPath:(NSIndexPath*)indexPath {
    
}

@end
