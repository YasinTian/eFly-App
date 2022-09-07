//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSObject-Protocol.h"

@class NSCache, NSString;

@interface ReaderThumbCache : NSObject <NSObject>
{
    NSCache *thumbCache;
}

+ (void)purgeThumbCachesOlderThan:(double)arg1;
+ (void)touchThumbCacheWithGUID:(id)arg1;
+ (void)removeThumbCacheWithGUID:(id)arg1;
+ (void)createThumbCacheWithGUID:(id)arg1;
+ (id)thumbCachePathForGUID:(id)arg1;
+ (id)appCachesPath;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeNullForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)thumbRequest:(id)arg1 priority:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
