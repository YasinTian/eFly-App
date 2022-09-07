//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TuSDKTKFiltersTaskInterface-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIImage;

@interface TuSDKTKFiltersTaskBase : NSObject <TuSDKTKFiltersTaskInterface>
{
    NSString *_sampleRootPath;
    NSMutableArray *_viewGroups;
    _Bool _taskCompleted;
    NSMutableArray *_filerNames;
    _Bool _isRenderFilterThumb;
    NSString *_threadID;
    UIImage *_inputImage;
}

@property(retain, nonatomic) NSString *sampleRootPath; // @synthesize sampleRootPath=_sampleRootPath;
@property(retain, nonatomic) UIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (void)cancelLoadImageWithView:(id)arg1;
- (void)loadImageWithView:(id)arg1 filterName:(id)arg2;
- (void)notifyImageViewWithResult:(id)arg1;
- (void)dealloc;
- (void)resetQueues;
- (id)sampleImageWithFilterName:(id)arg1;
- (id)processImagePathWithFilterCode:(id)arg1;
- (void)asyncBuildWithFilterName:(id)arg1;
- (void)asyncBuildFiltersTemp;
- (void)startAsync;
- (void)start;
@property(readonly, nonatomic) _Bool taskCompleted;
@property(nonatomic) _Bool isRenderFilterThumb;
- (_Bool)_isRenderFilterThumb;
- (void)appendFilterCode:(id)arg1;
@property(retain, nonatomic) NSArray *filerNames;
- (id)viewGroups;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
