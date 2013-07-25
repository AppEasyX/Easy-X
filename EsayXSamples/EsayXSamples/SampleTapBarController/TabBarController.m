//
//  TabBarController.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "TabBarController.h"

@interface TabBarController ()

@end

@implementation TabBarController

- (void)dealloc {
    DLog(@"");
    
    [super dealloc];
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - 
#pragma mark - createModel sel 自动被调用 需要在它里面处理创建tabBarController对应的controllers
- (void)createModel {
    
    EXTabStrip* tabBarStrip = [[[EXTabStrip alloc] init] autorelease];
    
    
    //这里声明了一些tab的实例，你可以当做Button，
    EXTab* tapItem0 = [EXTab buttonWithType:UIButtonTypeCustom];
    [tapItem0 setTitle:@"bar1" forState:UIControlStateNormal];
    [tapItem0 setTitleColor:RGBCOLOR(42, 61, 78) forState:UIControlStateNormal];
    [tapItem0 setTitleColor:RGBCOLOR(215, 231, 246) forState:UIControlStateSelected];
    [tapItem0 setBackgroundImage:EXImage(@"EX_Sample_tabBarItm_bac_hilighted.png") forState:UIControlStateSelected];
    
    EXTab* tapItem1 = [EXTab buttonWithType:UIButtonTypeCustom];
    [tapItem1 setTitle:@"bar2" forState:UIControlStateNormal];
    [tapItem1 setTitleColor:RGBCOLOR(42, 61, 78) forState:UIControlStateNormal];
    [tapItem1 setTitleColor:RGBCOLOR(215, 231, 246) forState:UIControlStateSelected];
    [tapItem1 setBackgroundImage:EXImage(@"EX_Sample_tabBarItm_bac_hilighted.png") forState:UIControlStateSelected];
    
    EXTab* tapItem2 = [EXTab buttonWithType:UIButtonTypeCustom];
    [tapItem2 setTitle:@"bar3" forState:UIControlStateNormal];
    [tapItem2 setTitleColor:RGBCOLOR(42, 61, 78) forState:UIControlStateNormal];
    [tapItem2 setTitleColor:RGBCOLOR(215, 231, 246) forState:UIControlStateSelected];
    [tapItem2 setBackgroundImage:EXImage(@"EX_Sample_tabBarItm_bac_hilighted.png") forState:UIControlStateSelected];
    
    EXTab* tapItem3 = [EXTab buttonWithType:UIButtonTypeCustom];
    [tapItem3 setTitle:@"bar4" forState:UIControlStateNormal];
    [tapItem3 setTitleColor:RGBCOLOR(42, 61, 78) forState:UIControlStateNormal];
    [tapItem3 setTitleColor:RGBCOLOR(215, 231, 246) forState:UIControlStateSelected];
    [tapItem3 setBackgroundImage:EXImage(@"EX_Sample_tabBarItm_bac_hilighted.png") forState:UIControlStateSelected];
    
    EXTab* tapItem4 = [EXTab buttonWithType:UIButtonTypeCustom];
    [tapItem4 setTitle:@"more" forState:UIControlStateNormal];
    [tapItem4 setTitleColor:RGBCOLOR(42, 61, 78) forState:UIControlStateNormal];
    [tapItem4 setTitleColor:RGBCOLOR(215, 231, 246) forState:UIControlStateSelected];
    [tapItem4 setBackgroundImage:EXImage(@"EX_Sample_tabBarItm_bac_hilighted.png") forState:UIControlStateSelected];
    
    EXTab* tapItem5 = [EXTab buttonWithType:UIButtonTypeCustom];
    [tapItem5 setTitle:@"bar5" forState:UIControlStateNormal];
    [tapItem5 setTitleColor:RGBCOLOR(42, 61, 78) forState:UIControlStateNormal];
    [tapItem5 setTitleColor:RGBCOLOR(215, 231, 246) forState:UIControlStateSelected];
    [tapItem5 setBackgroundImage:EXImage(@"EX_Sample_tabBarItm_bac_hilighted.png") forState:UIControlStateSelected];
    
    EXTab* tapItem6 = [EXTab buttonWithType:UIButtonTypeCustom];
    [tapItem6 setTitle:@"bar6" forState:UIControlStateNormal];
    [tapItem6 setTitleColor:RGBCOLOR(42, 61, 78) forState:UIControlStateNormal];
    [tapItem6 setTitleColor:RGBCOLOR(215, 231, 246) forState:UIControlStateSelected];
    [tapItem6 setBackgroundImage:EXImage(@"EX_Sample_tabBarItm_bac_hilighted.png") forState:UIControlStateSelected];
    
    EXTab* tapItem7 = [EXTab buttonWithType:UIButtonTypeCustom];
    [tapItem7 setTitle:@"bar7" forState:UIControlStateNormal];
    [tapItem7 setTitleColor:RGBCOLOR(42, 61, 78) forState:UIControlStateNormal];
    [tapItem7 setTitleColor:RGBCOLOR(215, 231, 246) forState:UIControlStateSelected];
    [tapItem7 setBackgroundImage:EXImage(@"EX_Sample_tabBarItm_bac_hilighted.png") forState:UIControlStateSelected];
    
    tabBarStrip.tabItems = [NSArray arrayWithObjects:
                            [EXTabItem tabItemWithTab:tapItem0 URL:@"Tab1Controller"],
                            [EXTabItem tabItemWithTab:tapItem1 URL:@"Tab2Controller"],
                            [EXTabItem tabItemWithTab:tapItem2 URL:@"Tab3Controller"],
                            [EXTabItem tabItemWithTab:tapItem3 URL:@"Tab4Controller"],
                            [EXTabItem tabItemWithTab:tapItem4 URL:nil],
                            [EXTabItem tabItemWithTab:tapItem5 URL:@"Tab5Controller"],
                            [EXTabItem tabItemWithTab:tapItem6 URL:@"Tab6Controller"],
                            [EXTabItem tabItemWithTab:tapItem7 URL:@"Tab7Controller"],
                            nil];
    
    self.tabBarStrip = tabBarStrip;
}


UIImage *EXImage (NSString *name) {
    
    return [UIImage imageNamed:name];
}

@end
