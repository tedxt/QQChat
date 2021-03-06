//
//  NJMessageFrameModel.h
//  QQ聊天
//
//  Created by piglikeyoung on 15/3/4.
//  Copyright (c) 2015年 jinheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class JHMessageModel;

#define JHTextFont [UIFont systemFontOfSize:15]
#define JHTimeFont [UIFont systemFontOfSize:13]
#define JHEdgeInsetsWidth 20

@interface JHMessageFrameModel : NSObject

/**
 *  数据模型
 */
@property (nonatomic, strong) JHMessageModel *message;
/**
 *  时间的frame
 */
@property (nonatomic, assign, readonly) CGRect timeF;
/**
 *  头像frame
 */
@property (nonatomic, assign, readonly) CGRect iconF;
/**
 *  正文frame
 */
@property (nonatomic, assign, readonly) CGRect textF;
/**
 *  cell的高度
 */
@property (nonatomic, assign, readonly) CGFloat cellHeight;

@end
