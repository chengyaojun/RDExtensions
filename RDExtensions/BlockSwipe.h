//
//  BlockSwipe.h
//  RDExtensions
//
//  Created by ChengYaojun on 2017/3/30.
//  Copyright © 2017年 ChengYaojun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BlockSwipe : UISwipeGestureRecognizer

- (instancetype)init:(void (^)(UISwipeGestureRecognizer *))action;

@end
