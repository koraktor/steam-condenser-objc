/** 
 * This code is free software; you can redistribute it and/or modify it under
 * the terms of the new BSD License.
 *
 * Copyright (c) 2009, Sebastian Staudt
 */

#import <Foundation/Foundation.h>

#define REQUEST_CHALLENGE 0;
#define REQUEST_INFO 1;
#define REQUEST_PLAYER 2;
#define REQUEST_RULES 3


@interface GameServer : NSObject {

@protected
    NSHashTable* infoHash;
    int          ping;
    NSArray*     playerArray;
    NSHost*      serverHost;
    int          serverPort;
    NSHashTable* rulesHash;
}

-(id) initWithHost:(NSHost*) host andPort:(int) portNumber;

/*-(void)getReply;
-(void)initialize;
-(void)sendRequest;
-(void)updateChallengeNumber;
-(void)updatePing;
-(void)updatePlayerInfo;
-(void)updateRulesInfo;
-(void)updateServerInfo;*/

@end
