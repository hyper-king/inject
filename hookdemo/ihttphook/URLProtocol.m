//
//  URLProtocol.m
//  ihttphook
//
//  Created by alonglamp on 2020/8/9.
//  Copyright © 2020 com.aiceflower. All rights reserved.
//

#import "URLProtocol.h"
#import "HttpCurl.h"

@implementation URLProtocol

+ (BOOL)canInitWithRequest:(NSURLRequest *)request{
    return YES;
}

+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)request{
    return request;
}

- (void)startLoading{
    [[HttpCurl sharedInstance] doRequestWithprotocal:self];
}

- (void)stopLoading{
    
}

@end
