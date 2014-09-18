/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSnappingController : NSObject {
    double __accumulatedOffset;
    double __previousOffset;
    double _attractionOffsetThreshold;
    double _attractionVelocityThreshold;
    double _retentionOffsetThreshold;
    double _targetOffset;
    bool__hasEnteredAttractionThreshold;
    bool__hasEnteredRetentionThreshold;
    bool__previousOffsetInvalid;
    bool_accumulateOffsetWhileSnapped;
    bool_snappedToTarget;
}

@property(setter=_setAccumulatedOffset:) double _accumulatedOffset;
@property(setter=_setHasEnteredAttractionThreshold:) bool _hasEnteredAttractionThreshold;
@property(setter=_setHasEnteredRetentionThreshold:) bool _hasEnteredRetentionThreshold;
@property(setter=_setPreviousOffset:) double _previousOffset;
@property(getter=_isPreviousOffsetInvalid,setter=_setPreviousOffsetInvalid:) bool _previousOffsetInvalid;
@property bool accumulateOffsetWhileSnapped;
@property double attractionOffsetThreshold;
@property double attractionVelocityThreshold;
@property double retentionOffsetThreshold;
@property(getter=isSnappedToTarget,readonly) bool snappedToTarget;
@property double targetOffset;

- (double)_accumulatedOffset;
- (bool)_hasEnteredAttractionThreshold;
- (bool)_hasEnteredRetentionThreshold;
- (bool)_isOffset:(double)arg1 inThreshold:(double)arg2;
- (bool)_isPreviousOffsetInvalid;
- (double)_previousOffset;
- (void)_setAccumulatedOffset:(double)arg1;
- (void)_setBoolPointer:(inout bool*)arg1 toValue:(bool)arg2;
- (void)_setHasEnteredAttractionThreshold:(bool)arg1;
- (void)_setHasEnteredRetentionThreshold:(bool)arg1;
- (void)_setPreviousOffset:(double)arg1;
- (void)_setPreviousOffsetInvalid:(bool)arg1;
- (bool)accumulateOffsetWhileSnapped;
- (double)attractionOffsetThreshold;
- (double)attractionVelocityThreshold;
- (id)init;
- (bool)isSnappedToTarget;
- (void)reset;
- (double)retentionOffsetThreshold;
- (void)setAccumulateOffsetWhileSnapped:(bool)arg1;
- (void)setAttractionOffsetThreshold:(double)arg1;
- (void)setAttractionVelocityThreshold:(double)arg1;
- (void)setRetentionOffsetThreshold:(double)arg1;
- (void)setTargetOffset:(double)arg1;
- (double)targetOffset;
- (void)updateOffset:(inout double*)arg1 withVelocity:(double)arg2 shouldSnap:(out bool*)arg3 shouldBreak:(out bool*)arg4;

@end