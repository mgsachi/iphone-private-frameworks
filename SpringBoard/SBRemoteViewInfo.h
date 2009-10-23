/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class NSString, SBProxyRemoteView, SBApplication;

@interface SBRemoteViewInfo : NSObject {
	NSString* _remoteViewIdentifier;
	SBProxyRemoteView* _proxyRemoteView;
	unsigned _contextID;
	SBApplication* _application;
	CGSize _viewSize;
}
@property(retain, nonatomic) NSString* remoteViewIdentifier;
@property(assign, nonatomic) unsigned contextID;
@property(retain, nonatomic) SBProxyRemoteView* proxyRemoteView;
@property(retain, nonatomic) SBApplication* application;
@property(assign, nonatomic) CGSize viewSize;
@end
