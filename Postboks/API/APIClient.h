//
//  Created by Ole Gammelgaard Poulsen on 15/08/14.
//  Copyright (c) 2014 SHAPE A/S. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RACSignal;
@class EboksAccount;
@class EboksSession;


@interface APIClient : NSObject

+ (APIClient *)sharedInstanceForAccount:(EboksAccount *)account;


- (RACSignal *)getSessionForAccount:(EboksAccount *)account;

- (RACSignal *)getFoldersWithSessionId:(EboksSession *)session;

- (RACSignal *)getFolderId:(NSString *)folderId session:(EboksSession *)session skip:(NSInteger)skip take:(NSInteger)take;

- (RACSignal *)getMessageId:(NSString *)messageId folderId:(NSString *)folderId session:(EboksSession *)session;

- (RACSignal *)getFileDataForMessageId:(NSString *)messageId session:(EboksSession *)session;
@end