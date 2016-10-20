//
//  SJPopoverView.h
//  JCWidget-iOS
//
//  https://github.com/sadjason/iOSDemos/blob/master/PopViewDemo%2FPopViewDemo%2FPopoverView.h
//
//  Created by mzy on 16/5/12.
//  Copyright © 2016年 jcdroid. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SJPopoverViewDelegate;

@interface SJPopoverView : UIView

// 一般使用以下两个方法即可
-(id)initWithPoint:(CGPoint)point titles:(NSArray *)titles imageNames:(NSArray *)images;
-(void)show;

// 如下两个方法一般不会用到
-(void)dismiss;
-(void)dismiss:(BOOL)animated;

@property (nonatomic, assign) id<SJPopoverViewDelegate> delegate;

@end

@protocol SJPopoverViewDelegate <NSObject>

- (void)didSelectedRowAtIndex:(NSInteger)index;

@end
