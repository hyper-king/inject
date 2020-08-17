//
//  HttpCurl.h
//  ihttphook
//
//  Created by alonglamp on 2020/8/9.
//  Copyright © 2020 com.aiceflower. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <curl/curl.h>

NS_ASSUME_NONNULL_BEGIN

@interface HttpCurl : NSObject

+ (instancetype)sharedInstance;

- (void)doRequestWithprotocal:(NSURLProtocol *)protocol;

@end

NS_ASSUME_NONNULL_END
