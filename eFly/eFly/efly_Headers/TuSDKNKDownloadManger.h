//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TuSDKNKDownloadTaskDelegate-Protocol.h"

@class NSMutableArray, NSString, TuSDKNKDownloadTask;

@interface TuSDKNKDownloadManger : NSObject <TuSDKNKDownloadTaskDelegate>
{
    NSMutableArray *_delegates;
    NSMutableArray *_tasks;
    TuSDKNKDownloadTask *_currentTask;
}

+ (id)manager;
- (void).cxx_destruct;
- (id)jsonAllDataWithType:(long long)arg1 downloadedIds:(id)arg2;
- (id)itemsWithType:(long long)arg1;
- (void)notifyDelegatesWithTask:(id)arg1 changedStatus:(long long)arg2;
- (void)downloadTask:(id)arg1 changedStatus:(long long)arg2;
- (void)nextTask;
- (_Bool)cancelTaskWithType:(long long)arg1 idt:(unsigned long long)arg2;
- (void)appenTaskWithType:(long long)arg1 idt:(unsigned long long)arg2 key:(id)arg3 fileId:(id)arg4;
- (void)trySaveTaskDataInCache;
- (void)tryLoadTaskDataWithCache;
- (id)cacheKey;
- (void)removeDelegate:(id)arg1;
- (void)appenDelegate:(id)arg1;
- (void)initManger;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

