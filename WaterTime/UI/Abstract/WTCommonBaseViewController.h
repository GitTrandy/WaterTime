//
//  WTCommonBaseViewController.h
//  WaterTime
//
//  Created by WaterLiu on 15/1/23.
//  Copyright (c) 2015年 WaterLiu. All rights reserved.
//

#import "WTLayoutBaseViewController.h"

@interface WTCommonBaseViewController : WTLayoutBaseViewController
{
    UIScrollView*           _scrollView;
}

@property (nonatomic, readonly) UIScrollView* scrollView;

- (void)setupScrollView:(BOOL)setup;

@end

