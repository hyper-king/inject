//
//  SessionConfiguration.h
//  ihttphook
//
//  Created by alonglamp on 2020/8/9.
//  Copyright © 2020 com.aiceflower. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SessionConfiguration : NSObject

//是否交换方法
@property (nonatomic,assign) BOOL isExchanged;

+ (SessionConfiguration *)defaultConfiguration;
// 交换掉NSURLSessionConfiguration的 protocolClasses方法
- (void)load;
// 还原初始化
- (void)unload;

@end

NS_ASSUME_NONNULL_END
