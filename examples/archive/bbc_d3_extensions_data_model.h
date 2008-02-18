/* Note: defines are undefined at the end of the file */


#if !defined (MXF_BASIC_TYPE_DEF)
#define MXF_BASIC_TYPE_DEF(typeId, name, size)
#endif
#if !defined (MXF_ARRAY_TYPE_DEF)
#define MXF_ARRAY_TYPE_DEF(typeId, name, elementTypeId, fixedSize)
#endif
#if !defined (MXF_COMPOUND_TYPE_DEF)
#define MXF_COMPOUND_TYPE_DEF(typeId, name)
#endif
#if !defined (MXF_COMPOUND_TYPE_MEMBER)
#define MXF_COMPOUND_TYPE_MEMBER(memberName, memberTypeId)
#endif
#if !defined (MXF_INTERPRETED_TYPE_DEF)
#define MXF_INTERPRETED_TYPE_DEF(typeId, name, interpretedTypeId, fixedSize)
#endif

#if !defined (MXF_LABEL)
#define MXF_LABEL(d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15)
#endif
#if !defined (MXF_SET_DEFINITION)
#define MXF_SET_DEFINITION(parentName, name, label)
#endif
#if !defined (MXF_ITEM_DEFINITION)
#define MXF_ITEM_DEFINITION(setName, name, label, localTag, typeId, isRequired)
#endif



    MXF_ITEM_DEFINITION(Preface, D3P_D3ErrorCount,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x40, 0x01, 0x01, 0x00),
        0x0000,
        MXF_UINT32_TYPE,
        0
    );


    MXF_ITEM_DEFINITION(Preface, D3P_PSEFailureCount,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x40, 0x01, 0x02, 0x00),
        0x0000,
        MXF_UINT32_TYPE,
        0
    );


MXF_SET_DEFINITION(InterchangeObject, D3P_InfaxFramework, 
    MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_Format,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_ProgrammeTitle,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x02, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_EpisodeTitle,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x03, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_TransmissionDate,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x04, 0x00),
        0x0000,
        MXF_TIMESTAMP_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_MagazinePrefix,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x05, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_ProgrammeNumber,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x06, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_ProductionCode,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x0F, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_SpoolStatus,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x07, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_StockDate,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x08, 0x00),
        0x0000,
        MXF_TIMESTAMP_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_SpoolDescriptor,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x09, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_Memo,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x0A, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_Duration,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x0B, 0x00),
        0x0000,
        MXF_INT64_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_SpoolNumber,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x0C, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_AccessionNumber,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );
					
    MXF_ITEM_DEFINITION(D3P_InfaxFramework, D3P_CatalogueDetail,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x0E, 0x00),
        0x0000,
        MXF_UTF16STRING_TYPE,
        0
    );

MXF_SET_DEFINITION(InterchangeObject, D3P_PSEAnalysisFramework, 
    MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x02, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(D3P_PSEAnalysisFramework, D3P_RedFlash,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x02, 0x01, 0x00),
        0x0000,
        MXF_INT16_TYPE,
        0
    );
    
    
    MXF_ITEM_DEFINITION(D3P_PSEAnalysisFramework, D3P_SpatialPattern,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x02, 0x02, 0x00),
        0x0000,
        MXF_INT16_TYPE,
        0
    );
    
    
    MXF_ITEM_DEFINITION(D3P_PSEAnalysisFramework, D3P_LuminanceFlash,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x02, 0x03, 0x00),
        0x0000,
        MXF_INT16_TYPE,
        0
    );
    
    MXF_ITEM_DEFINITION(D3P_PSEAnalysisFramework, D3P_ExtendedFailure,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x02, 0x04, 0x00),
        0x0000,
        MXF_BOOLEAN_TYPE,
        0
    );
    
    
MXF_SET_DEFINITION(InterchangeObject, D3P_D3ReplayErrorFramework, 
    MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(D3P_D3ReplayErrorFramework, D3P_D3ErrorCode,
        MXF_LABEL(0x06, 0x0E, 0x2B, 0x34, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x04, 0x01, 0x01, 0x01, 0x03, 0x01, 0x00),
        0x0000,
        MXF_UINT8_TYPE,
        0
    );
    

    
MXF_SET_DEFINITION(GenericDescriptor, TapeDescriptor, 
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x2e, 0x00)
);




#undef MXF_BASIC_TYPE_DEF
#undef MXF_ARRAY_TYPE_DEF
#undef MXF_COMPOUND_TYPE_DEF
#undef MXF_COMPOUND_TYPE_MEMBER
#undef MXF_INTERPRETED_TYPE_DEF
#undef MXF_LABEL
#undef MXF_SET_DEFINITION
#undef MXF_ITEM_DEFINITION


