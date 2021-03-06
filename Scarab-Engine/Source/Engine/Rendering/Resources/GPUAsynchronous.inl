/////////////////////////////////////////////////////////////////////////////////
// File : Engine/Rendering/Resources/GPUAsynchronous.inl
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : GPU Resource : Asynchronous queries, predicates & counters
/////////////////////////////////////////////////////////////////////////////////
// Part of Scarab-Engine, licensed under the
// Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License
//   http://creativecommons.org/licenses/by-nc-nd/3.0/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Known Bugs : None.
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// GPUAsynchronous implementation
inline Bool GPUAsynchronous::IsBound() const {
    return m_pDeviceAsynchronous->IsCreated();
}

inline GPUAsynchronousType GPUAsynchronous::GetType() const {
    return (GPUAsynchronousType)( m_pDeviceAsynchronous->GetType() );
}

inline UInt GPUAsynchronous::GetDataSize() const {
    return m_pDeviceAsynchronous->GetDataSize();
}

/////////////////////////////////////////////////////////////////////////////////
// GPUQuery implementation
inline GPUQueryType GPUQuery::GetQueryType() const {
    return (GPUQueryType)( m_pDeviceQuery->GetQueryType() );
}

/////////////////////////////////////////////////////////////////////////////////
// GPUQueryCommandProcessing implementation

/////////////////////////////////////////////////////////////////////////////////
// GPUQueryOcclusion implementation

/////////////////////////////////////////////////////////////////////////////////
// GPUQueryTimeStampFrequency implementation

/////////////////////////////////////////////////////////////////////////////////
// GPUQueryTimeStamp implementation

/////////////////////////////////////////////////////////////////////////////////
// GPUQueryStatsPipeline implementation

/////////////////////////////////////////////////////////////////////////////////
// GPUQueryStatsStreamOutput implementation

/////////////////////////////////////////////////////////////////////////////////
// GPUPredicate implementation
inline GPUPredicateType GPUPredicate::GetPredicateType() const {
    return (GPUPredicateType)( m_pDevicePredicate->GetPredicateType() );
}

/////////////////////////////////////////////////////////////////////////////////
// GPUPredicateOcclusion implementation
inline Bool GPUPredicateOcclusion::DrawWhenUnsure() const {
    return m_hDevicePredicateOcclusion.DrawWhenUnsure();
}

/////////////////////////////////////////////////////////////////////////////////
// GPUPredicateStreamOutputOverflow implementation

/////////////////////////////////////////////////////////////////////////////////
// GPUCounter implementation


